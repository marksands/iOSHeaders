//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SXColumnLayout, SXDataTableComponent, SXDataTableComponentController, SXDocumentController;

@protocol SXDataTableComponentControllerDataSource <NSObject>
- (NSString *)contentSizeCategoryForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (SXColumnLayout *)documentColumnLayoutForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (id <SXTextComponentLayoutHosting>)textComponentLayoutHostingForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (SXDocumentController *)documentControllerForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (SXDataTableComponent *)componentForDataTableComponentController:(SXDataTableComponentController *)arg1;
- (double)widthForDataTableComponentController:(SXDataTableComponentController *)arg1;
@end

