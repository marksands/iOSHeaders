//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class GEOApplicationAuditToken, GEOMapServiceTraits, GEOPeer, NSError, NSObject<OS_xpc_object>, NSProgress, NSString;

@interface GEOXPCRequest : NSObject <NSSecureCoding>
{
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    NSError *_error;
    NSString *_service;
    NSString *_method;
    GEOPeer *_peer;
    GEOMapServiceTraits *_traits;
    GEOApplicationAuditToken *_auditToken;
    NSProgress *_progressToMirrorOverXPC;
}

+ (_Bool)reportsProgress;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned char flags; // @synthesize flags=_flags;
@property(retain, nonatomic) GEOApplicationAuditToken *preferredAuditToken; // @synthesize preferredAuditToken=_auditToken;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progressToMirrorOverXPC;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) GEOPeer *peer; // @synthesize peer=_peer;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(retain, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void).cxx_destruct;
- (id)description;
- (void)send:(id)arg1 withReply:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)send:(id)arg1;
- (id)_prepareRequest;
- (id)_createConnectionWithQueue:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *replyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3;
- (id)init;

@end

