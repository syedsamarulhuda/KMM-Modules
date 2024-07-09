import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    alias(libs.plugins.kotlin.multiplatform)
    alias(libs.plugins.android.library)
    alias(libs.plugins.jetbrains.compose)
    id("maven-publish")
}

group = "com.sample.kmm"
version = "1.0.0"

publishing {
    repositories {
        maven {

        }
    }
}

kotlin {
    androidTarget {
        publishLibraryVariants("release", "debug")
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    val xcframeworkName = "injector"
    val xcf = XCFramework(xcframeworkName)
    listOf(
        iosArm64(),
        iosSimulatorArm64()
    ).forEach {
        it.binaries.framework {
            baseName = xcframeworkName
            xcf.add(this)
        }
    }
    sourceSets {
        commonMain.dependencies {
            implementation(project(":core-networking"))
            implementation(project(":core-database"))
            implementation(project(":core-pref"))
            api(project(":sample-kmp-api"))
            implementation(project(":sample-kmp-impl"))
            implementation(project(":common-api"))
            implementation(compose.runtime)
            implementation(compose.foundation)
            implementation(compose.material)
            implementation(libs.koin.core)
            implementation(libs.koin.compose)
            implementation(compose.components.resources)
        }
        androidMain.dependencies {
            implementation(libs.koin.android)
        }
    }
}

android {
    namespace = "com.sample.injector"
    compileSdk = libs.versions.compile.sdk.get().toInt()
    defaultConfig {
        minSdk = libs.versions.min.sdk.get().toInt()
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}
