//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PipelineKit/PIOperation.h>

@interface PIOperationSubclass : PIOperation
{
    CDUnknownBlockType _finishBlock;
}

@property(readonly, retain, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)cleanup;
- (void)cancel;
- (void)execute;
- (void)_cleanup;
- (void)_didFinish;
- (CDUnknownBlockType)cancellationBlock;
- (CDUnknownBlockType)executionBlock;

@end

