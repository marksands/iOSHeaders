//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXWebContentMessageHandler.h"

@class NSString;

@interface SXWebContentWeakMessageHandler : NSObject <SXWebContentMessageHandler>
{
    id <SXWebContentMessageHandler> _messageHandler;
}

+ (id)handlerWithMessageHandler:(id)arg1;
@property(readonly, nonatomic) __weak id <SXWebContentMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

