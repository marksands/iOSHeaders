//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSNumber, NSString;

@protocol DAMailMessageAttachment
- (_Bool)isMostDefinitelyBase64ed;
- (NSString *)displayName;
- (NSString *)name;
- (NSNumber *)size;

@optional
- (_Bool)isInline;
- (NSString *)data;
- (NSString *)contentType;
- (NSString *)clientId;
- (unsigned long long)changeType;
@end
