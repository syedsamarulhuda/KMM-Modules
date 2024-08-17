plugins {
    alias(libs.plugins.kotlin.multiplatform)
    alias(libs.plugins.android.library)
    alias(libs.plugins.jetbrains.compose)
    alias(libs.plugins.kotlin.serialization)
    id("maven-publish")
}

apply(from = "../maven.publication.gradle")

kotlin {
    androidTarget {
        publishLibraryVariants("release", "debug")
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }

    iosArm64()
    iosSimulatorArm64()
    sourceSets {
        commonMain.dependencies {
            implementation(project(":sample-kmp-api"))
            implementation(project(":core-networking"))
            implementation(project(":common-api"))
            implementation(project(":core-database"))
            implementation(project(":core-pref"))
            implementation(libs.lifecycle.viewmodel.compose)
            implementation(compose.runtime)
            implementation(compose.foundation)
            implementation(compose.ui)
            implementation(compose.material)
            implementation(compose.material3)
            implementation(libs.koin.core)
            implementation(libs.koin.compose)
            implementation(compose.components.resources)
            implementation(libs.kotlinx.serialization.json)
        }
    }
}

android {
    namespace = "com.sample.sample_kmp_impl"
    compileSdk = libs.versions.compile.sdk.get().toInt()
    defaultConfig {
        minSdk = libs.versions.min.sdk.get().toInt()
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    composeOptions {
        kotlinCompilerExtensionVersion = libs.versions.compose.compiler.get()
    }
}
