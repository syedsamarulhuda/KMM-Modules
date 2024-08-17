// Top-level build file where you can add configuration options common to all sub-projects/modules.

buildscript {
    repositories {
        google()
        mavenCentral()
        mavenLocal()
        //maven()
        gradlePluginPortal()
    }
}

allprojects {
    repositories {
        google()
        mavenCentral()
        mavenLocal()
        //maven()
    }
}

plugins {
    alias(libs.plugins.android.application) apply false
    alias(libs.plugins.android.library) apply false
    alias(libs.plugins.jetbrains.kotlin.android) apply false
    alias(libs.plugins.jetbrains.compose) apply false
    alias(libs.plugins.kotlin.multiplatform) apply false
    alias(libs.plugins.kotlin.serialization) apply false
}

subprojects{
    group = "com.syedsamarulhuda.kmm"
    version = "2.0.0"
}