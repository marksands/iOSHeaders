//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class TSKAccessController, TSSStyle;

@interface TSDStyleWarmingOperation : NSOperation
{
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}

- (void)warm;
- (void)main;
- (id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3;

@end

