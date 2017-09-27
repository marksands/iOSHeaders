//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, UIDragItem, UIDragPreviewTarget, UITableViewDropPlaceholder, UITableViewDropProposal;

@protocol UITableViewDropCoordinator <NSObject>
@property(readonly, nonatomic) id <UIDropSession> session;
@property(readonly, nonatomic) UITableViewDropProposal *proposal;
@property(readonly, nonatomic) NSIndexPath *destinationIndexPath;
@property(readonly, nonatomic) NSArray *items;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toTarget:(UIDragPreviewTarget *)arg2;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 intoRowAtIndexPath:(NSIndexPath *)arg2 rect:(struct CGRect)arg3;
- (id <UIDragAnimating>)dropItem:(UIDragItem *)arg1 toRowAtIndexPath:(NSIndexPath *)arg2;
- (id <UITableViewDropPlaceholderContext>)dropItem:(UIDragItem *)arg1 toPlaceholder:(UITableViewDropPlaceholder *)arg2;
@end

