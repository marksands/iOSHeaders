//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPeerPaymentWebServiceArchiver-Protocol.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSharedPeerPaymentWebServiceArchiver : NSObject <PKPeerPaymentWebServiceArchiver>
{
    NPKCompanionAgentConnection *_connection;
}

@property(retain, nonatomic) NPKCompanionAgentConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)archiveContext:(id)arg1;
- (id)initWithCompanionAgentConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

