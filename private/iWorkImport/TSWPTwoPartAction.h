//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TSWPTwoPartAction : NSObject
{
    CDUnknownBlockType _startAction;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _finishAction;
    _Bool _performImmediately;
}

+ (id)actionWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool performImmediately; // @synthesize performImmediately=_performImmediately;
- (void).cxx_destruct;
- (void)cancel;
- (void)performFinishAction;
- (void)performStartAction;
- (id)initWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;

@end

