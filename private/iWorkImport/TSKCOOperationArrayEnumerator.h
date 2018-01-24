//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCOIntermediateOperationEnumerator.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator>
{
    NSMutableArray *_operationArray;
    unsigned long long _nextIndex;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperations;
- (void)reset;
- (void)appendOperation:(id)arg1;
- (void)replaceOperation:(id)arg1;
- (id)nextOperationOnAddress:(id)arg1;
- (id)nextOperation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperationEnumerator:(id)arg1;

@end

