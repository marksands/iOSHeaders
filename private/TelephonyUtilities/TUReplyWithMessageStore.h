//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TUReplyWithMessageStore : NSObject
{
}

- (void)_handleMessagesStoreChanged;
- (void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)cannedRepliesForSending;
- (id)cannedReplyActionSheetOptions;
- (id)cannedReplies;
- (id)_cannedRepliesForSending:(_Bool)arg1;
- (id)customReplies;
- (id)defaultReplies;
- (id)_defaultRepliesForSending:(_Bool)arg1;
- (int)count;
- (void)dealloc;
- (id)init;

@end

