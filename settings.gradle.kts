pluginManagement {
    repositories {
        google()
        mavenCentral()
        mavenLocal()
        gradlePluginPortal()
        //maven()
    }
}

/*dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
    }
}*/

//enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

rootProject.name = "KMM APP"
include(":app")
include(":injector")
include(":sample-kmp-api")
include(":sample-kmp-impl")
include(":core-networking")
include(":common-api")
include(":core-database")
include(":core-pref")
