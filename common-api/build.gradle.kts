plugins {
    alias(libs.plugins.kotlin.multiplatform)
    alias(libs.plugins.android.library)
    alias(libs.plugins.kotlin.serialization)
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

    iosArm64()
    iosSimulatorArm64()
    sourceSets {
        commonMain.dependencies {
            implementation(libs.kotlinx.serialization.json)
        }
    }
}

android {
    namespace = "com.sample.common_api"
    compileSdk = libs.versions.compile.sdk.get().toInt()
    defaultConfig {
        minSdk = libs.versions.min.sdk.get().toInt()
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}
