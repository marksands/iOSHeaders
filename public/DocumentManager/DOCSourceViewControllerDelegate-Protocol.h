//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOCConcreteLocation, DOCItem, DOCSourceViewController;

@protocol DOCSourceViewControllerDelegate <NSObject>

@optional
- (_Bool)sourceViewControllerIsCollapsed:(DOCSourceViewController *)arg1;
- (void)sourceViewController:(DOCSourceViewController *)arg1 didPickItem:(DOCItem *)arg2;
- (void)sourceViewController:(DOCSourceViewController *)arg1 didSelectLocation:(DOCConcreteLocation *)arg2;
@end

