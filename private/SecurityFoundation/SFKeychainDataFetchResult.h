//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SecurityFoundation/_SFKeychainFetchResult.h>

@class SFKeychainData;

@interface SFKeychainDataFetchResult : _SFKeychainFetchResult
{
    id _dataFetchResult;
}

- (void).cxx_destruct;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly) SFKeychainData *value; // @dynamic value;

@end

