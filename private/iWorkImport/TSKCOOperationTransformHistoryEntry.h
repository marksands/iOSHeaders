//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TSKCOOperationTransformHistoryEntry : NSObject
{
    NSString *_originalOperationString;
    NSString *_transformingOperationString;
    NSString *_resultOperationString;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)applyResult:(id)arg1;
- (id)initWithOriginalOperation:(id)arg1 transformingOperation:(id)arg2;

@end

