//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, NSString;

@interface FPRenameOperation : FPActionOperation
{
    FPItem *_item;
    NSString *_newName;
}

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)presendNotifications;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initWithItem:(id)arg1 newName:(id)arg2;

@end

