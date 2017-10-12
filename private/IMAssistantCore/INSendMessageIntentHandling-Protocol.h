//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INSendMessageIntent;

@protocol INSendMessageIntentHandling <NSObject>
- (void)handleSendMessage:(INSendMessageIntent *)arg1 completion:(void (^)(INSendMessageIntentResponse *))arg2;

@optional
- (void)resolveSpeakableGroupNameForSendMessage:(INSendMessageIntent *)arg1 withCompletion:(void (^)(INSpeakableStringResolutionResult *))arg2;
- (void)resolveContentForSendMessage:(INSendMessageIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveGroupNameForSendMessage:(INSendMessageIntent *)arg1 withCompletion:(void (^)(INStringResolutionResult *))arg2;
- (void)resolveRecipientsForSendMessage:(INSendMessageIntent *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)resolveRecipientsForSendMessage:(INSendMessageIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)confirmSendMessage:(INSendMessageIntent *)arg1 completion:(void (^)(INSendMessageIntentResponse *))arg2;
@end
