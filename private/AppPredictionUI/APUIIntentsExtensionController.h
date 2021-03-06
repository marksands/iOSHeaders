//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INCExtensionConnection, INIntent;

@interface APUIIntentsExtensionController : NSObject
{
    INCExtensionConnection *_extensionConnection;
    INIntent *_intent;
}

+ (void)launchAppWithIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (void)launchAppInBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handleIntentWithReply:(CDUnknownBlockType)arg1;
- (void)confirmIntentWithReply:(CDUnknownBlockType)arg1;
- (void)_performOperationWithExtension:(CDUnknownBlockType)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_freshExtensionConnection;
- (id)_extensionConnection;

@end

