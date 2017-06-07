//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTask.h>

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask
{
    int _overwrite;
    NSURL *_destinationURL;
    NSURL *_priorOrderedURL;
    _Bool _shouldSendOrder;
}

+ (id)stringFromOverwriteValue:(int)arg1;
@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
- (void).cxx_destruct;
- (void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)additionalHeaderValues;
- (id)requestBody;
- (id)description;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 andOverwrite:(int)arg3;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

