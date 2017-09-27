//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSCountedSet, NSError, NSFileAccessProcessManager, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSFileAccessClaim : NSObject <NSSecureCoding>
{
    NSXPCConnection *_client;
    NSString *_claimID;
    NSString *_purposeIDOrNil;
    _Bool _cameFromSuperarbiter;
    unsigned long long _blockageCount;
    _Bool _didWait;
    _Bool _isRevoked;
    NSMutableArray *_claimerBlockageReasons;
    NSError *_claimerError;
    NSMutableOrderedSet *_pendingClaims;
    NSMutableSet *_blockingClaims;
    NSCountedSet *_blockingReactorIDs;
    NSMutableArray *_providerCancellationProcedures;
    NSMutableDictionary *_reacquisitionProceduresByPresenterID;
    NSMutableArray *_revocationProcedures;
    NSMutableArray *_devaluationProcedures;
    NSMutableArray *_finishingProcedures;
    NSFileAccessProcessManager *_processManager;
    NSObject<OS_dispatch_semaphore> *_claimerWaiter;
    _Bool _hasInvokedClaimer;
    id _claimerOrNil;
    CDUnknownBlockType _serverClaimerOrNil;
    NSMutableArray *_sandboxTokens;
    NSObject<OS_dispatch_queue> *_arbiterQueue;
    id _originatingReactorQueueID;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)canWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
+ (_Bool)canReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 safelyOverlapWritingItemAtLocation:(id)arg3 options:(unsigned long long)arg4;
@property(readonly) NSObject<OS_dispatch_semaphore> *claimerWaiter; // @synthesize claimerWaiter=_claimerWaiter;
- (_Bool)shouldCancelInsteadOfWaiting;
- (id)allURLs;
- (void)disavowed;
- (void)finished;
- (_Bool)shouldBeRevokedPriorToInvokingAccessor;
- (id)purposeIDOfClaimOnItemAtLocation:(id)arg1 forMessagingPresenter:(id)arg2;
- (_Bool)checkIfSymbolicLinkAtURL:(id)arg1 withResolutionCount:(long long *)arg2 andIfSoThenReevaluateSelf:(CDUnknownBlockType)arg3;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (_Bool)isRevoked;
- (_Bool)isGranted;
- (void)devalueOldClaim:(id)arg1;
- (void)cancelled;
- (void)devalueSelf;
- (void)revoked;
- (void)invokeClaimer;
- (void)prepareItemForUploadingFromURL:(id)arg1 thenContinue:(CDUnknownBlockType)arg2;
- (_Bool)_writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)canAccessLocations:(id)arg1 forReading:(_Bool)arg2 error:(id *)arg3;
- (void)makePresentersOfItemAtLocation:(id)arg1 orContainedItem:(_Bool)arg2 relinquishUsingProcedureGetter:(CDUnknownBlockType)arg3;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 writingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideOrAttachPhysicalURLIfNecessaryForPurposeID:(id)arg2 readingOptions:(unsigned long long)arg3 thenContinue:(CDUnknownBlockType)arg4;
- (void)makeProviderOfItemAtLocation:(id)arg1 providePhysicalURLThenContinue:(CDUnknownBlockType)arg2;
- (void)makeProviderOfItemAtLocation:(id)arg1 provideIfNecessaryWithOptions:(unsigned long long)arg2 thenContinue:(CDUnknownBlockType)arg3;
- (void)granted;
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)removePendingClaims:(id)arg1;
- (id)pendingClaims;
- (void)addPendingClaim:(id)arg1;
- (void)evaluateNewClaim:(id)arg1;
- (void)scheduleBlockedClaim:(id)arg1;
- (void)givePriorityToClaim:(id)arg1;
- (_Bool)isBlockedByClaimWithPurposeID:(id)arg1;
- (_Bool)claimerInvokingIsBlockedByReactorWithID:(id)arg1;
- (void)whenFinishedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenDevaluedPerformProcedure:(CDUnknownBlockType)arg1;
- (void)whenRevokedPerformProcedure:(CDUnknownBlockType)arg1;
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;
- (id)claimerError;
- (void)setClaimerError:(id)arg1;
- (void)unblockClaimerForReason:(id)arg1;
- (void)blockClaimerForReason:(id)arg1;
- (_Bool)didWait;
- (void)unblock;
- (void)block;
- (void)startObservingClientState;
- (_Bool)cameFromSuperarbiter;
- (void)setCameFromSuperarbiter;
- (void)acceptClaimFromClient:(id)arg1 arbiterQueue:(id)arg2 grantHandler:(CDUnknownBlockType)arg3;
- (void)prepareClaimForGrantingWithArbiterQueue:(id)arg1;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (int)clientProcessIdentifier;
- (id)purposeID;
- (id)claimID;
- (id)client;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithClient:(id)arg1 claimID:(id)arg2 purposeID:(id)arg3;
- (void)_setupWithClaimID:(id)arg1 purposeID:(id)arg2 originatingReactorQueueID:(id)arg3;
- (_Bool)shouldInformProvidersAboutEndOfWriteWithOptions:(unsigned long long)arg1;
- (_Bool)shouldReadingWithOptions:(unsigned long long)arg1 causePresenterToRelinquish:(id)arg2;

@end

