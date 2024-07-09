#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UIViewController, InjectorKoinInjector, InjectorKoin_coreModule, InjectorLibraryDrawableResource, InjectorSharedResourceImpl, InjectorKoin_coreKoin, InjectorSampleKmpProvider, InjectorKoin_coreKoinDefinition<R>, InjectorKoin_coreScope, InjectorKoin_coreParametersHolder, InjectorKotlinArray<T>, InjectorKoin_coreInstanceFactory<T>, InjectorKoin_coreSingleInstanceFactory<T>, InjectorKoin_coreScopeDSL, InjectorLibraryResource, InjectorLibraryResourceItem, InjectorKotlinLazyThreadSafetyMode, InjectorKoin_coreLogger, InjectorKoin_coreExtensionManager, InjectorKoin_coreInstanceRegistry, InjectorKoin_corePropertyRegistry, InjectorKoin_coreScopeRegistry, InjectorKoin_coreLockable, InjectorStately_concurrencyThreadLocalRef<T>, InjectorKoin_coreBeanDefinition<T>, InjectorKoin_coreInstanceFactoryCompanion, InjectorKoin_coreInstanceContext, InjectorKotlinEnumCompanion, InjectorKotlinEnum<E>, InjectorKoin_coreLevel, InjectorKoin_coreScopeRegistryCompanion, InjectorKoin_coreKind, InjectorKoin_coreCallbacks<T>;

@protocol InjectorCore_databaseDataBaseConfig, InjectorCore_networkingNetworkConfig, InjectorCommon_apiSharedResourceApi, InjectorKoin_coreKoinComponent, InjectorSample_kmp_apiTestMainPage, InjectorKoin_coreQualifier, InjectorKoin_coreKoinScopeComponent, InjectorKotlinKClass, InjectorKotlinLazy, InjectorKoin_coreScopeCallback, InjectorKotlinIterator, InjectorLibraryQualifier, InjectorKotlinKDeclarationContainer, InjectorKotlinKAnnotatedElement, InjectorKotlinKClassifier, InjectorKotlinComparable, InjectorKoin_coreKoinExtension;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface InjectorBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface InjectorBase (InjectorBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface InjectorMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface InjectorMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorInjectorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface InjectorNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface InjectorByte : InjectorNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface InjectorUByte : InjectorNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface InjectorShort : InjectorNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface InjectorUShort : InjectorNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface InjectorInt : InjectorNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface InjectorUInt : InjectorNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface InjectorLong : InjectorNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface InjectorULong : InjectorNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface InjectorFloat : InjectorNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface InjectorDouble : InjectorNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface InjectorBoolean : InjectorNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Core_databaseDataBaseConfig")))
@protocol InjectorCore_databaseDataBaseConfig
@required
@property (readonly) NSString *dbName __attribute__((swift_name("dbName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataConfigImpl")))
@interface InjectorDataConfigImpl : InjectorBase <InjectorCore_databaseDataBaseConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *dbName __attribute__((swift_name("dbName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyProvider")))
@interface InjectorDependencyProvider : InjectorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UIViewController *)loadPage __attribute__((swift_name("loadPage()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinInjector")))
@interface InjectorKoinInjector : InjectorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)koinInjector __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorKoinInjector *shared __attribute__((swift_name("shared")));
- (void)initiateKoin __attribute__((swift_name("initiateKoin()")));
- (void)initiateKoinAppModule:(InjectorKoin_coreModule *)appModule __attribute__((swift_name("initiateKoin(appModule:)")));
@end

__attribute__((swift_name("Core_networkingNetworkConfig")))
@protocol InjectorCore_networkingNetworkConfig
@required
@property (readonly) NSString * _Nullable baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) BOOL overriderGzip __attribute__((swift_name("overriderGzip")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkConfigImpl")))
@interface InjectorNetworkConfigImpl : InjectorBase <InjectorCore_networkingNetworkConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString * _Nullable baseUrl __attribute__((swift_name("baseUrl")));
@end

__attribute__((swift_name("Common_apiSharedResourceApi")))
@protocol InjectorCommon_apiSharedResourceApi
@required
@property (readonly) InjectorLibraryDrawableResource *headphoneSvg __attribute__((swift_name("headphoneSvg")));
@property (readonly) InjectorLibraryDrawableResource *test __attribute__((swift_name("test")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedResourceImpl")))
@interface InjectorSharedResourceImpl : InjectorBase <InjectorCommon_apiSharedResourceApi>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedResourceImpl __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorSharedResourceImpl *shared __attribute__((swift_name("shared")));
@property (readonly) InjectorLibraryDrawableResource *headphoneSvg __attribute__((swift_name("headphoneSvg")));
@property (readonly) InjectorLibraryDrawableResource *test __attribute__((swift_name("test")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol InjectorKoin_coreKoinComponent
@required
- (InjectorKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKmpProvider")))
@interface InjectorSampleKmpProvider : InjectorBase <InjectorKoin_coreKoinComponent>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sampleKmpProvider __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorSampleKmpProvider *shared __attribute__((swift_name("shared")));
@property (readonly) id<InjectorSample_kmp_apiTestMainPage> testMainPage __attribute__((swift_name("testMainPage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBModulesKt")))
@interface InjectorDBModulesKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)getDbModules __attribute__((swift_name("getDbModules()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KoinKt")))
@interface InjectorKoinKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)kmmAppModule __attribute__((swift_name("kmmAppModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkModulesKt")))
@interface InjectorNetworkModulesKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)getNetworkModules __attribute__((swift_name("getNetworkModules()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrefModulesKt")))
@interface InjectorPrefModulesKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)getSharedPrefModules __attribute__((swift_name("getSharedPrefModules()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceKt")))
@interface InjectorResourceKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)resourceModule __attribute__((swift_name("resourceModule()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SampleKmpModuleKt")))
@interface InjectorSampleKmpModuleKt : InjectorBase
+ (NSArray<InjectorKoin_coreModule *> *)getSampleKmpModules __attribute__((swift_name("getSampleKmpModules()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface InjectorKoin_coreModule : InjectorBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (InjectorKoin_coreKoinDefinition<id> *)factoryQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(InjectorKotlinArray<InjectorKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(id)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(InjectorKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(InjectorKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<InjectorKoin_coreModule *> *)plusModules:(NSArray<InjectorKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<InjectorKoin_coreModule *> *)plusModule:(InjectorKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(InjectorKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeScopeSet:(void (^)(InjectorKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (void)scopeQualifier:(id<InjectorKoin_coreQualifier>)qualifier scopeSet:(void (^)(InjectorKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (InjectorKoin_coreKoinDefinition<id> *)singleQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) InjectorMutableSet<InjectorKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<InjectorKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) InjectorMutableDictionary<NSString *, InjectorKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((swift_name("LibraryResource")))
@interface InjectorLibraryResource : InjectorBase
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryDrawableResource")))
@interface InjectorLibraryDrawableResource : InjectorLibraryResource
- (instancetype)initWithId:(NSString *)id items:(NSSet<InjectorLibraryResourceItem *> *)items __attribute__((swift_name("init(id:items:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface InjectorKoin_coreKoin : InjectorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (InjectorKoin_coreScope *)createScopeT:(id<InjectorKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (InjectorKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (InjectorKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (InjectorKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<InjectorKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<InjectorKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id)getQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<InjectorKotlinKClass>)clazz qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (InjectorKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (InjectorKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<InjectorKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<InjectorKotlinKClass>)clazz qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (InjectorKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (InjectorKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<InjectorKotlinLazy>)injectQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier mode:(InjectorKotlinLazyThreadSafetyMode *)mode parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<InjectorKotlinLazy>)injectOrNullQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier mode:(InjectorKotlinLazyThreadSafetyMode *)mode parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<InjectorKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride createEagerInstances:(BOOL)createEagerInstances __attribute__((swift_name("loadModules(modules:allowOverride:createEagerInstances:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(InjectorKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<InjectorKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) InjectorKoin_coreExtensionManager *extensionManager __attribute__((swift_name("extensionManager")));
@property (readonly) InjectorKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) InjectorKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) InjectorKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) InjectorKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("Sample_kmp_apiTestMainPage")))
@protocol InjectorSample_kmp_apiTestMainPage
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface InjectorKoin_coreKoinDefinition<R> : InjectorBase
- (instancetype)initWithModule:(InjectorKoin_coreModule *)module factory:(InjectorKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (InjectorKoin_coreKoinDefinition<R> *)doCopyModule:(InjectorKoin_coreModule *)module factory:(InjectorKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) InjectorKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) InjectorKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol InjectorKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface InjectorKoin_coreLockable : InjectorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface InjectorKoin_coreScope : InjectorKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<InjectorKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(InjectorKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<InjectorKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (id)getQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (id _Nullable)getClazz:(id<InjectorKotlinKClass>)clazz qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<InjectorKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (InjectorKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getOrNullClazz:(id<InjectorKotlinKClass>)clazz qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (InjectorKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()")));
- (id<InjectorKotlinLazy>)injectQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier mode:(InjectorKotlinLazyThreadSafetyMode *)mode parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<InjectorKotlinLazy>)injectOrNullQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier mode:(InjectorKotlinLazyThreadSafetyMode *)mode parameters:(InjectorKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(InjectorKotlinArray<InjectorKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<InjectorKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(InjectorKotlinArray<InjectorKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) InjectorStately_concurrencyThreadLocalRef<NSMutableArray<InjectorKoin_coreParametersHolder *> *> *_parameterStackLocal __attribute__((swift_name("_parameterStackLocal")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) InjectorKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<InjectorKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface InjectorKoin_coreParametersHolder : InjectorBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values useIndexedValues:(InjectorBoolean * _Nullable)useIndexedValues __attribute__((swift_name("init(_values:useIndexedValues:)"))) __attribute__((objc_designated_initializer));
- (InjectorKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<InjectorKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<InjectorKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (InjectorKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t index __attribute__((swift_name("index")));
@property (readonly) InjectorBoolean * _Nullable useIndexedValues __attribute__((swift_name("useIndexedValues")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface InjectorKotlinArray<T> : InjectorBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(InjectorInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<InjectorKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface InjectorKoin_coreInstanceFactory<T> : InjectorKoin_coreLockable
- (instancetype)initWithBeanDefinition:(InjectorKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) InjectorKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(InjectorKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(InjectorKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (T _Nullable)getContext:(InjectorKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isCreatedContext:(InjectorKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) InjectorKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface InjectorKoin_coreSingleInstanceFactory<T> : InjectorKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(InjectorKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(InjectorKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(InjectorKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(InjectorKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(InjectorKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface InjectorKoin_coreScopeDSL : InjectorBase
- (instancetype)initWithScopeQualifier:(id<InjectorKoin_coreQualifier>)scopeQualifier module:(InjectorKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (InjectorKoin_coreKoinDefinition<id> *)factoryQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (InjectorKoin_coreKoinDefinition<id> *)scopedQualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) InjectorKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<InjectorKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end


/**
 * @note annotations
 *   androidx.compose.runtime.Immutable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LibraryResourceItem")))
@interface InjectorLibraryResourceItem : InjectorBase
- (instancetype)initWithQualifiers:(NSSet<id<InjectorLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("init(qualifiers:path:offset:size:)"))) __attribute__((objc_designated_initializer));
- (InjectorLibraryResourceItem *)doCopyQualifiers:(NSSet<id<InjectorLibraryQualifier>> *)qualifiers path:(NSString *)path offset:(int64_t)offset size:(int64_t)size __attribute__((swift_name("doCopy(qualifiers:path:offset:size:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol InjectorKoin_coreKoinScopeComponent <InjectorKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()"))) __attribute__((deprecated("not used internaly anymore")));
@property (readonly) InjectorKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol InjectorKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol InjectorKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol InjectorKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol InjectorKotlinKClass <InjectorKotlinKDeclarationContainer, InjectorKotlinKAnnotatedElement, InjectorKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol InjectorKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol InjectorKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface InjectorKotlinEnum<E> : InjectorBase <InjectorKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) InjectorKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface InjectorKotlinLazyThreadSafetyMode : InjectorKotlinEnum<InjectorKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) InjectorKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) InjectorKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) InjectorKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (InjectorKotlinArray<InjectorKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<InjectorKotlinLazyThreadSafetyMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface InjectorKoin_coreLogger : InjectorBase
- (instancetype)initWithLevel:(InjectorKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(InjectorKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(InjectorKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(InjectorKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(InjectorKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property InjectorKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreExtensionManager")))
@interface InjectorKoin_coreExtensionManager : InjectorBase
- (instancetype)initWith_koin:(InjectorKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (id<InjectorKoin_coreKoinExtension>)getExtensionId:(NSString *)id __attribute__((swift_name("getExtension(id:)")));
- (id<InjectorKoin_coreKoinExtension> _Nullable)getExtensionOrNullId:(NSString *)id __attribute__((swift_name("getExtensionOrNull(id:)")));
- (void)registerExtensionId:(NSString *)id extension:(id<InjectorKoin_coreKoinExtension>)extension __attribute__((swift_name("registerExtension(id:extension:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface InjectorKoin_coreInstanceRegistry : InjectorBase
- (instancetype)initWith_koin:(InjectorKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(InjectorKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) InjectorKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, InjectorKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface InjectorKoin_corePropertyRegistry : InjectorBase
- (instancetype)initWith_koin:(InjectorKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface InjectorKoin_coreScopeRegistry : InjectorBase
- (instancetype)initWith_koin:(InjectorKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) InjectorKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<InjectorKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) InjectorKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<InjectorKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol InjectorKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(InjectorKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Stately_concurrencyThreadLocalRef")))
@interface InjectorStately_concurrencyThreadLocalRef<T> : InjectorBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)get __attribute__((swift_name("get()")));
- (void)remove __attribute__((swift_name("remove()")));
- (void)setValue:(T _Nullable)value __attribute__((swift_name("set(value:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol InjectorKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface InjectorKoin_coreBeanDefinition<T> : InjectorBase
- (instancetype)initWithScopeQualifier:(id<InjectorKoin_coreQualifier>)scopeQualifier primaryType:(id<InjectorKotlinKClass>)primaryType qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition kind:(InjectorKoin_coreKind *)kind secondaryTypes:(NSArray<id<InjectorKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (InjectorKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<InjectorKoin_coreQualifier>)scopeQualifier primaryType:(id<InjectorKotlinKClass>)primaryType qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *))definition kind:(InjectorKoin_coreKind *)kind secondaryTypes:(NSArray<id<InjectorKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<InjectorKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<InjectorKotlinKClass>)clazz qualifier:(id<InjectorKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<InjectorKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property InjectorKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(InjectorKoin_coreScope *, InjectorKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) InjectorKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<InjectorKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<InjectorKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<InjectorKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<InjectorKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface InjectorKoin_coreInstanceFactoryCompanion : InjectorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface InjectorKoin_coreInstanceContext : InjectorBase
- (instancetype)initWithLogger:(InjectorKoin_coreLogger *)logger scope:(InjectorKoin_coreScope *)scope parameters:(InjectorKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(logger:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) InjectorKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) InjectorKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) InjectorKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("LibraryQualifier")))
@protocol InjectorLibraryQualifier
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface InjectorKotlinEnumCompanion : InjectorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface InjectorKoin_coreLevel : InjectorKotlinEnum<InjectorKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) InjectorKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) InjectorKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) InjectorKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) InjectorKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) InjectorKoin_coreLevel *none __attribute__((swift_name("none")));
+ (InjectorKotlinArray<InjectorKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<InjectorKoin_coreLevel *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Koin_coreKoinExtension")))
@protocol InjectorKoin_coreKoinExtension
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onRegisterKoin:(InjectorKoin_coreKoin *)koin __attribute__((swift_name("onRegister(koin:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface InjectorKoin_coreScopeRegistryCompanion : InjectorBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) InjectorKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface InjectorKoin_coreKind : InjectorKotlinEnum<InjectorKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) InjectorKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) InjectorKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) InjectorKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (InjectorKotlinArray<InjectorKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<InjectorKoin_coreKind *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface InjectorKoin_coreCallbacks<T> : InjectorBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (InjectorKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
