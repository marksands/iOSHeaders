//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (SLTwitterAdditions)
+ (id)sl_twitterErrorMessageFromResponseObject:(id)arg1;
+ (id)sl_twitterResponseObjectErrorCode:(id)arg1;
- (int)sl_twitterResponseTypeFromResponseObject:(id)arg1 looseAuthFailureMatching:(_Bool)arg2;
- (int)sl_twitterResponseType:(id)arg1;
@end
