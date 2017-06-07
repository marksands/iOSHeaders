//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOProtobufSession;

__attribute__((visibility("hidden")))
@interface GEOServiceSession : NSObject
{
    GEOProtobufSession *_protobufSession;
    unsigned long long _urlType;
}

+ (id)sharedDispatcherServiceSession;
@property(readonly, nonatomic) unsigned long long urlType; // @synthesize urlType=_urlType;
@property(readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
- (void).cxx_destruct;
- (id)taskWithKind:(int)arg1 request:(id)arg2 traits:(id)arg3 timeout:(double)arg4 auditToken:(id)arg5 queue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (long long)_experimentType;
- (id)serviceTypeNumber;
- (id)initWithProtobufSession:(id)arg1 urlType:(unsigned long long)arg2;
- (id)init;
- (int)experimentDispatcherRequestTypeForRequest:(id)arg1;
@property(readonly, nonatomic) long long experimentType;
@property(readonly, nonatomic) int serviceType;
- (id)URLForRequest:(id)arg1;

@end

