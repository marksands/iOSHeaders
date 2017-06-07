//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>
#import <iWorkImport/TSPLazyReferenceDelegate-Protocol.h>
#import <iWorkImport/TSPObjectDelegate-Protocol.h>
#import <iWorkImport/TSPPassphraseConsumer-Protocol.h>
#import <iWorkImport/TSPSupportDirectoryDelegate-Protocol.h>

@class NSData, NSHashTable, NSMapTable, NSProgress, NSRecursiveLock, NSSet, NSString, NSURL, NSUUID, SFUCryptoKey, TSPComponentManager, TSPDataDownloadManager, TSPDataManager, TSPDocumentMetadata, TSPDocumentProperties, TSPDocumentRevision, TSPDocumentSaveOperationState, TSPObject, TSPObjectContainer, TSPObjectUUIDMap, TSPPackage, TSPPackageWriteCoordinator, TSPRegistry, TSPResourceContext, TSPSupportManager, TSPSupportMetadata, TSUTemporaryDirectory;
@protocol NSFilePresenter, OS_dispatch_group, OS_dispatch_queue, TSPObjectContextDelegate;

__attribute__((visibility("hidden")))
@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPPassphraseConsumer>
{
    // Error parsing type: Aq, name: _lastObjectIdentifier
    // Error parsing type: Aq, name: _modifyObjectToken
    // Error parsing type: Ai, name: _modifyObjectCount
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    TSPPackage *_documentPackage;
    TSPPackage *_supportPackage;
    NSURL *_supportURL;
    TSPDocumentProperties *_documentProperties;
    NSMapTable *_objects;
    TSPObjectUUIDMap *_objectUUIDMap;
    TSPDocumentRevision *_documentRevision;
    long long _preferredPackageType;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_dataAttributesQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversForKnownObjectQueue;
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSProgress *_nextSaveProgress;
    TSPDocumentSaveOperationState *_saveOperationState;
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
    NSHashTable *_objectsToIgnoreModifications;
    NSHashTable *_objectModifyDelegates;
    _Bool _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct unordered_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    NSObject<OS_dispatch_queue> *_asynchronousObjectModifierQueue;
    long long _suspendAsynchronousObjectModifiersCount;
    NSHashTable *_asynchronousObjectModifiers;
    NSHashTable *_suspendedAsynchronousObjectModifiers;
    TSPObject *_supportObject;
    TSPPackageWriteCoordinator *_supportWriteCoordinator;
    struct {
        unsigned int delegateRespondsToAdditionalDocumentPropertiesForWrite:1;
        unsigned int delegateRespondsToAdditionalDocumentSupportPropertiesForWrite:1;
        unsigned int delegateRespondsToDocumentPasswordHintForWrite:1;
        unsigned int delegateRespondsToPackageDataForWrite:1;
        unsigned int delegateRespondsToAreNewExternalReferencesToDataAllowed:1;
        unsigned int delegateRespondsToAreExternalReferencesToDataAllowedAtURL:1;
        unsigned int delegateRespondsToBaseUUIDForObjectUUID:1;
        unsigned int delegateRespondsToPreserveDocumentRevisionIdentifierForSaveURL:1;
        unsigned int delegateRespondsToFilePresenter:1;
        unsigned int delegateRespondsToSupportDirectoryURLReturningIsUnique:1;
        unsigned int delegateRespondsToSupportDirectoryURL:1;
        unsigned int delegateRespondsToIgnoreDocumentSupport:1;
        unsigned int delegateRespondsToIsDocumentSupportTemporary:1;
        unsigned int delegateRespondsToShouldLoadAllComponents:1;
        unsigned int delegateRespondsToNewObjectUUID:1;
        unsigned int delegateRespondsToIsInCollaborationModeForContext:1;
        unsigned int delegateRespondsToIsInReadOnlyModeForContext:1;
        unsigned int delegateRespondsToIsCollaborationOfflineForContext:1;
        unsigned int delegateRespondsToDidCollaborationContextValidateWithServerForContext:1;
        unsigned int skipDocumentUpgrade:1;
    } _flags;
    _Bool _nested;
    _Bool _losesDataOnWrite;
    NSSet *_unsupportedFeatureIdentifiers;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id <TSPObjectContextDelegate> _delegate;
    TSPRegistry *_registry;
    TSPComponentManager *_componentManager;
    TSPResourceContext *_resourceContext;
    TSPDataManager *_dataManager;
    TSPDataDownloadManager *_dataDownloadManager;
    TSPSupportManager *_supportManager;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    TSPDocumentMetadata *_documentMetadata;
    TSPSupportMetadata *_supportMetadata;
    unsigned long long _saveToken;
    NSData *_passwordVerifier;
}

+ (void)waitForPendingEndSaveGroup:(id)arg1;
+ (_Bool)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (void)purgeSharedDocumentResourceCache;
+ (void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2;
+ (id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2;
+ (void)removeDefaultSupportDirectory;
+ (id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id *)arg3;
+ (_Bool)isTangierEditingFormatURL:(id)arg1;
+ (_Bool)isNativeDirectoryFormatURL:(id)arg1;
+ (_Bool)isNativeOrTangierEditingFormatURL:(id)arg1 hasNativeUTI:(_Bool)arg2 nestedDocumentFilename:(id)arg3;
+ (_Bool)isNativeOrTangierEditingFormatURL:(id)arg1 hasNativeUTI:(_Bool)arg2;
+ (_Bool)isNativeOrTangierEditingFormatURL:(id)arg1;
+ (id)releaseQueue;
+ (_Bool)forceAPFSMode;
@property(readonly, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property(readonly, nonatomic) unsigned long long saveToken; // @synthesize saveToken=_saveToken;
@property(readonly, nonatomic) TSPSupportMetadata *supportMetadata; // @synthesize supportMetadata=_supportMetadata;
@property(readonly, nonatomic) TSPDocumentMetadata *documentMetadata; // @synthesize documentMetadata=_documentMetadata;
@property(readonly, nonatomic) TSPObjectContainer *supportObjectContainer; // @synthesize supportObjectContainer=_supportObjectContainer;
@property(readonly, nonatomic) TSPObjectContainer *documentObjectContainer; // @synthesize documentObjectContainer=_documentObjectContainer;
@property(readonly, nonatomic) TSPSupportManager *supportManager; // @synthesize supportManager=_supportManager;
@property(readonly, nonatomic) TSPDataDownloadManager *dataDownloadManager; // @synthesize dataDownloadManager=_dataDownloadManager;
@property(readonly, nonatomic) TSPDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(readonly, nonatomic) TSPResourceContext *resourceContext; // @synthesize resourceContext=_resourceContext;
@property(readonly, nonatomic) TSPComponentManager *componentManager; // @synthesize componentManager=_componentManager;
@property(readonly, nonatomic) TSPRegistry *registry; // @synthesize registry=_registry;
@property(nonatomic) __weak id <TSPObjectContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property(readonly, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
@property(readonly, nonatomic) NSSet *unsupportedFeatureIdentifiers; // @synthesize unsupportedFeatureIdentifiers=_unsupportedFeatureIdentifiers;
@property(readonly, nonatomic) _Bool losesDataOnWrite; // @synthesize losesDataOnWrite=_losesDataOnWrite;
@property(nonatomic) _Bool nested; // @synthesize nested=_nested;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (long long)updateModifyObjectToken;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(_Bool)arg2 validateNewObjects:(_Bool)arg3 identifier:(long long *)arg4;
- (_Bool)isObjectInDocument:(id)arg1;
- (id)objectUUIDMap;
- (_Bool)canSetObjectUUIDForObject:(id)arg1;
- (id)newObjectUUIDForObject:(id)arg1;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
@property(nonatomic) long long lastObjectIdentifier;
- (long long)newObjectIdentifier;
- (id)baseUUIDForObjectUUID;
@property(readonly, nonatomic) NSUUID *versionUUID;
- (_Bool)updateDocumentUUIDPreserveOriginalDocumentSupport:(_Bool)arg1 preserveShareUUID:(_Bool)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSUUID *documentUUID;
@property(readonly, nonatomic) TSPPackage *supportPackage;
@property(readonly, nonatomic) TSPPackage *documentPackage;
- (void)didReadDocumentObject:(id)arg1;
- (void)setDocumentObject:(id)arg1;
- (_Bool)shouldLoadAllComponentsForDocumentURL:(id)arg1;
@property(readonly, nonatomic) _Bool ignoreDocumentResourcesWhileReading;
@property(readonly, nonatomic) _Bool ignoreVersionCheckingWhileReading;
@property(readonly, nonatomic) _Bool ignoreUnknownContentWhileReading;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
- (id)supportDirectoryURLReturningIsBundleURL:(_Bool *)arg1;
- (void)willModifyObject:(id)arg1 duringReadOperation:(_Bool)arg2;
- (void)endIgnoringModificationsForObject:(id)arg1;
- (void)beginIgnoringModificationsForObject:(id)arg1;
- (long long)modifyObjectTokenForNewObject;
@property(readonly, nonatomic) TSPObjectContext *context;
- (void)performReadUsingAccessorImpl:(CDUnknownBlockType)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)prepareForDocumentReplacementWithSuccess:(_Bool)arg1 forSafeSave:(_Bool)arg2;
- (void)prepareForDocumentReplacement;
- (void)waitForSaveToFinishIfNeeded;
- (id)initWithPartialDocumentURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id *)arg4;
- (id)initForQuickLookWithURL:(id)arg1 registry:(id)arg2 delegate:(id)arg3 passphrase:(id)arg4 error:(id *)arg5;
- (id)initForSpotlightWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 error:(id *)arg4;
- (void)canPerformUserActionUsingBlock:(CDUnknownBlockType)arg1;
- (void)registerAsynchronousObjectModifier:(id)arg1;
- (void)resumeAsynchronousModifications;
- (void)suspendAsynchronousModificationsForObjectTargetType:(unsigned long long)arg1;
- (void)removeObjectModifyDelegate:(id)arg1;
- (void)addObjectModifyDelegate:(id)arg1;
- (_Bool)containsDataConformingToUTI:(id)arg1;
@property(readonly, nonatomic) _Bool didCollaborationContextValidateWithServer;
@property(readonly, nonatomic) _Bool isCollaborationOffline;
@property(readonly, nonatomic) _Bool isInReadOnlyMode;
- (_Bool)isInCollaborationMode;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) _Bool isPasswordProtected;
@property(readonly) long long aggregateReadabilityForDocumentResources;
- (void)enumerateDocumentResourcesUsingBlock:(CDUnknownBlockType)arg1;
- (id)documentResourceDataForDigestString:(id)arg1 locator:(id)arg2 filename:(id)arg3 canDownload:(_Bool)arg4;
- (id)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)conditionallyPerformResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
- (_Bool)areExternalReferencesSupported;
- (_Bool)readObjectForIdentifier:(long long)arg1 isWeakReference:(_Bool)arg2 rootObjectComponent:(id)arg3 object:(id *)arg4 error:(id *)arg5;
- (id)readObjectIfNeededForIdentifier:(long long)arg1 isWeakReference:(_Bool)arg2 componentIdentifier:(long long)arg3;
- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (_Bool)readComponent:(id)arg1 isWeakReference:(_Bool)arg2 rootObject:(id *)arg3 allObjects:(id *)arg4 error:(id *)arg5;
- (_Bool)readComponent:(id)arg1 isWeakReference:(_Bool)arg2 documentPackage:(id)arg3 supportPackage:(id)arg4 rootObject:(id *)arg5 allObjects:(id *)arg6 error:(id *)arg7;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)prepareToReadSupportObjectExternalDataReferencesAllowed:(_Bool)arg1 accessor:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool isSupportModified;
@property(readonly, nonatomic) _Bool isDocumentModified;
- (void)didReadSupportObject:(id)arg1;
- (void)setSupportObjectImpl:(id)arg1;
@property(retain, nonatomic) TSPObject *supportObject;
@property long long preferredPackageType;
- (void)resetDocumentRevision;
- (id)incrementDocumentRevisionWithIdentifier:(id)arg1;
@property(retain) TSPDocumentRevision *documentRevision;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (id)dataWithContentsOfPackagePath:(id)arg1;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (id)temporaryDirectory;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (_Bool)didFinishSuccessfullyReadingObjects:(id)arg1 readCoordinator:(id)arg2 finalizeHandlerQueue:(id)arg3;
- (_Bool)readWithReadCoordinator:(id)arg1 finalizeHandlerQueue:(id)arg2 rootObject:(id *)arg3 error:(id *)arg4 readCompletion:(CDUnknownBlockType)arg5;
- (_Bool)readDocumentObjectFromDatabasePackageURL:(id)arg1 error:(id *)arg2;
- (_Bool)continueReadingDocumentObjectFromPackageURL:(id)arg1 areExternalDataReferencesAllowed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)readDocumentObjectFromPackageURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long documentDataSize;
- (unsigned long long)documentObjectSize;
@property(readonly, nonatomic) unsigned long long documentSize;
- (unsigned long long)estimatedProgressTotalUnitCountForPackageType:(long long)arg1;
@property(readonly, nonatomic) long long packageType;
@property(readonly, nonatomic) TSPDocumentProperties *documentProperties;
@property(readonly, nonatomic) NSString *passphraseHint;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *lastPasswordAttempted;
- (_Bool)setPassphrase:(id)arg1;
- (_Bool)setDecryptionKey:(id)arg1;
- (void)endAssertOnModify;
- (void)beginAssertOnModify;
- (void)replaceDocumentObject:(id)arg1;
- (void)requestAutosaveForExpensiveCalculation;
- (void)requestAutosave;
- (void)resumeSaveAndAutosaveWithReason:(id)arg1;
- (void)suspendSaveAndAutosaveWithReason:(id)arg1;
- (void)resumeAutosaveWithReason:(id)arg1;
- (void)suspendAutosaveWithReason:(id)arg1;
- (_Bool)saveToURL:(id)arg1 packageType:(long long)arg2 encryptionKey:(id)arg3 originalURL:(id)arg4 error:(id *)arg5;
- (void)endSaveWithSuccess:(_Bool)arg1;
- (_Bool)endWriteWithSuccess:(_Bool)arg1 error:(id *)arg2;
- (id)currentPackageDataWriter;
- (_Bool)writeToURL:(id)arg1 originalPackage:(id)arg2 supportURL:(id)arg3 originalSupportPackage:(id)arg4 encryptionKey:(id)arg5 error:(id *)arg6;
- (_Bool)writeToURL:(id)arg1 encryptionKey:(id)arg2 error:(id *)arg3;
- (void)beginWriteWithOriginalURL:(id)arg1 relativeURLForExternalData:(id)arg2;
- (void)beginWriteWithOriginalURL:(id)arg1;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 documentUUID:(id)arg4;
- (void)beginSaveToURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3;
- (id)prepareSaveProgress;
- (void)performAsynchronousWriteOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDataAttributes:(CDUnknownBlockType)arg1;
- (void)performAsynchronousWriteOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperationOnDocumentState:(CDUnknownBlockType)arg1;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)endWriteOperation;
- (void)beginWriteOperation;
- (void)closeFromDealloc:(_Bool)arg1;
- (void)close;
- (void)dealloc;
- (void)createInternalMetadataIfNeeded;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 registry:(id)arg3 mode:(unsigned int)arg4 passphrase:(id)arg5 skipDocumentUpgrade:(_Bool)arg6 error:(id *)arg7;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 mode:(unsigned int)arg3 passphrase:(id)arg4 skipDocumentUpgrade:(_Bool)arg5 error:(id *)arg6;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 skipDocumentUpgrade:(_Bool)arg4 error:(id *)arg5;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 passphrase:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
- (id)initWithDelegate:(id)arg1 registry:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)dataWithLegacyDataIdentifier:(long long)arg1;
- (id)dataWithDigest:(id)arg1 preferredFilename:(id)arg2 canDownload:(_Bool)arg3 downloadPriority:(long long)arg4;
- (id)dataWithDigest:(id)arg1;
- (id)deterministicObjectUUIDRelativeToObject:(id)arg1 offset:(unsigned long long)arg2;
- (id)UUIDsFromObjects:(id)arg1;
- (id)objectsFromUUIDs:(id)arg1;
- (id)objectWithUUIDPath:(id)arg1;
- (id)objectWithUUIDIfAvailableAndLoaded:(id)arg1;
- (id)objectWithUUIDIfAvailable:(id)arg1;
- (id)objectWithUUID:(id)arg1;
- (id)objectLocale;
- (id)documentRoot;
- (void)proxyObjectMapping:(id)arg1 willProxyReferencedObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool requiresNetworkValidation;
@property(readonly) Class superclass;

@end

