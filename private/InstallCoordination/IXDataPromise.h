//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXDataPromiseSeed, NSError, NSString, NSUUID;
@protocol IXSDataPromiseProxy;

@interface IXDataPromise : NSObject <NSSecureCoding>
{
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
    IXDataPromiseSeed *_seed;
    id <IXSDataPromiseProxy> _remote;
}

+ (_Bool)supportsSecureCoding;
+ (id)outstandingPromises;
@property(retain, nonatomic) id <IXSDataPromiseProxy> remote; // @synthesize remote=_remote;
@property(retain, nonatomic) IXDataPromiseSeed *seed; // @synthesize seed=_seed;
@property(nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)_reEstablishRemoteConnection;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)cancelForReason:(id)arg1 error:(id *)arg2;
- (void)cancelForReason:(id)arg1 client:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
@property(nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
@property(readonly, nonatomic) NSError *errorOccurred;
@property(readonly, nonatomic) unsigned long long totalBytesNeededOnDisk; // @dynamic totalBytesNeededOnDisk;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property(readonly, copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) Class seedClass;
- (id)initWithSeed:(id)arg1;

@end

