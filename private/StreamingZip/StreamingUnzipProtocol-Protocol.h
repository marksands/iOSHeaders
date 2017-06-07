//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDictionary, NSString;

@protocol StreamingUnzipProtocol
- (void)setActiveDelegateMethods:(int)arg1;
- (void)terminateStreamWithReply:(void (^)(NSError *))arg1;
- (void)finishStreamWithReply:(void (^)(NSError *))arg1;
- (void)suspendStreamWithReply:(void (^)(unsigned long long, NSError *))arg1;
- (void)supplyBytes:(NSData *)arg1 withReply:(void (^)(NSError *, _Bool))arg2;
- (void)setupUnzipperWithOutputPath:(NSString *)arg1 sandboxExtensionToken:(char *)arg2 options:(NSDictionary *)arg3 withReply:(void (^)(NSError *, unsigned long long))arg4;
@end

