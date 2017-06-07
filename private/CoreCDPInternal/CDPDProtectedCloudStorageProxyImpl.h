//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDProtectedCloudStorageProxy-Protocol.h>

@class NSString;

@interface CDPDProtectedCloudStorageProxyImpl : NSObject <CDPDProtectedCloudStorageProxy>
{
}

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)pcsRestoreLocalBackup:(id)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(id)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

