//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString;

__attribute__((visibility("hidden")))
@interface _HKValidationErrorTracker : NSObject
{
    long long _errorCount;
    NSMutableString *_errorMessage;
}

@property(retain, nonatomic) NSMutableString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (id)init;

@end

