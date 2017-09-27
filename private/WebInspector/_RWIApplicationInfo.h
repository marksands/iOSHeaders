//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _RWIRelayConnectionToApplication;

__attribute__((visibility("hidden")))
@interface _RWIApplicationInfo : NSObject
{
    int _hostApplicationPID;
    _Bool _proxy;
    _Bool _hasRemoteDebugSession;
    _Bool _allowsRemoteAutomation;
    _Bool _hasUpdatedFromListing;
    int _pid;
    NSString *_bundleId;
    NSString *_name;
    _RWIRelayConnectionToApplication *_connection;
    NSString *_debuggerConnectionIdentifier;
    unsigned long long _applicationState;
}

+ (id)identifierForPID:(int)arg1;
@property(readonly, nonatomic) _Bool hasUpdatedFromListing; // @synthesize hasUpdatedFromListing=_hasUpdatedFromListing;
@property(readonly, nonatomic) _Bool allowsRemoteAutomation; // @synthesize allowsRemoteAutomation=_allowsRemoteAutomation;
@property(readonly, nonatomic) _Bool hasRemoteDebugSession; // @synthesize hasRemoteDebugSession=_hasRemoteDebugSession;
@property(readonly, nonatomic) unsigned long long applicationState; // @synthesize applicationState=_applicationState;
@property(copy, nonatomic) NSString *debuggerConnectionIdentifier; // @synthesize debuggerConnectionIdentifier=_debuggerConnectionIdentifier;
@property(retain, nonatomic) _RWIRelayConnectionToApplication *connection; // @synthesize connection=_connection;
@property(nonatomic, getter=isProxy) _Bool proxy; // @synthesize proxy=_proxy;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)setHostApplicationPID:(int)arg1;
- (_Bool)updateApplicationState:(unsigned long long)arg1;
- (_Bool)updateFromListing:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)initWithPID:(int)arg1 bundleId:(id)arg2 name:(id)arg3 isProxy:(_Bool)arg4 connection:(id)arg5 applicationState:(unsigned long long)arg6;

@end

