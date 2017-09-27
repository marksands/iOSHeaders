//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface WBSTabDialog : NSObject
{
    CDUnknownBlockType _presentationBlock;
    CDUnknownBlockType _dismissalBlock;
    _Bool _blocksWebProcessUntilDismissed;
    NSArray *_cancellationExemptions;
}

+ (id)tabDialogWithPresentationBlock:(CDUnknownBlockType)arg1 dismissalBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;
@property(nonatomic) _Bool blocksWebProcessUntilDismissed; // @synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed;
- (void).cxx_destruct;
- (id)createInfo;
- (id)init;
- (id)_init;

@end

