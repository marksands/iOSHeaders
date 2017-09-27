//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface MFAttachmentCompositionContext : NSObject
{
    NSString *_contextID;
    NSURL *_attachmentsBaseURL;
}

@property(copy, nonatomic) NSURL *attachmentsBaseURL; // @synthesize attachmentsBaseURL=_attachmentsBaseURL;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSArray *attachments;
- (id)initWithContextID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

