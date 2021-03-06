//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSMutableArray, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDateParserLibrary : NSObject
{
    TSULocale *mLocale;
    unsigned long long mMaxPermittedParsers;
    unsigned long long mNumberOfUses;
    unsigned long long mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

- (void)prepareDateParserInBackground;
- (void)returnDateParser:(id)arg1;
- (id)checkoutDateParser;
- (void)dealloc;
- (id)initWithLocale:(id)arg1;

@end

