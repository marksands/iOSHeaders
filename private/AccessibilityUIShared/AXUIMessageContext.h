//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXAccessQueue, NSObject<OS_xpc_object>;

@interface AXUIMessageContext : NSObject
{
    _Bool _completionRequiresWritingBlock;
    NSObject<OS_xpc_object> *_xpcMessage;
    void *_context;
    AXAccessQueue *_targetAccessQueue;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool completionRequiresWritingBlock; // @synthesize completionRequiresWritingBlock=_completionRequiresWritingBlock;
@property(retain, nonatomic) AXAccessQueue *targetAccessQueue; // @synthesize targetAccessQueue=_targetAccessQueue;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage; // @synthesize xpcMessage=_xpcMessage;
- (void).cxx_destruct;

@end

