//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (SafariCoreExtras)
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (id)safari_privacyPreservingDescription;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (_Bool)safari_isClientSideNetworkError;
@end

