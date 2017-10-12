//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPActionOperation.h>

@class FPItem, FPItemID, NSString;

@interface FPCreateFolderOperation : FPActionOperation
{
    FPItem *_parentItem;
    NSString *_folderName;
    FPItemID *_placeholderID;
    CDUnknownBlockType _createFolderCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType createFolderCompletionBlock; // @synthesize createFolderCompletionBlock=_createFolderCompletionBlock;
- (void).cxx_destruct;
- (void)presendNotifications;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)mainWithExtensionProxy:(id)arg1;
- (id)initWithParentItem:(id)arg1 folderName:(id)arg2;

@end
