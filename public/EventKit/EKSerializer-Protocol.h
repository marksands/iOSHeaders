//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class EKEvent, NSData, NSString;

@protocol EKSerializer
- (NSString *)version;
- (NSString *)versionFromData:(NSData *)arg1 error:(id *)arg2;
- (EKEvent *)deserializeData:(NSData *)arg1 error:(id *)arg2;
- (NSData *)serializeEvent:(EKEvent *)arg1 error:(id *)arg2;
@end

