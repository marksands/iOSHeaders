//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOResourceInfo, NSData, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOResourceLoadOperation <NSObject>
@property(readonly, nonatomic) NSData *data;
@property(nonatomic) _Bool requiresWiFi;
- (void)cancel;
- (void)startWithCompletionHandler:(void (^)(NSData *, NSError *))arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (id)initWithResource:(GEOResourceInfo *)arg1 existingPartialData:(NSData *)arg2 auditToken:(NSData *)arg3 baseURLString:(NSString *)arg4;
@end
