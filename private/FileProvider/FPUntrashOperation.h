//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSArray;

@interface FPUntrashOperation : FPActionOperation
{
    NSArray *_items;
    FPItem *_restoreDirectory;
}

- (void).cxx_destruct;
- (void)presendNotifications;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;

@end

