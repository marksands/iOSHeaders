//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFAttachmentPlaceholder, NSString, NSURL;

@protocol MFMessageRewriterPlaceholderResolver <NSObject>
- (id)contentForPlaceholder:(MFAttachmentPlaceholder *)arg1;
- (id)contentForContentID:(NSString *)arg1;
- (id)contentForURL:(NSURL *)arg1;
@end

