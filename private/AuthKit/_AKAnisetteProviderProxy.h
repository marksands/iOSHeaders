//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AKAnisetteProvisioningClientProtocol.h"

@class NSString;

@interface _AKAnisetteProviderProxy : NSObject <AKAnisetteProvisioningClientProtocol>
{
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
}

@property(retain, nonatomic) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
- (void).cxx_destruct;
- (void)legacyAnisetteDataForContext:(id)arg1 DSID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchAnisetteDataForContext:(id)arg1 provisionIfNecessary:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eraseAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)syncAnisetteForContext:(id)arg1 withSIMData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provisionAnisetteForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

