//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSItemProvider, _SFQuickLookDocumentView;

@protocol _SFQuickLookDocumentViewDelegate <NSObject>
- (long long)dataOwnerForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;

@optional
- (NSItemProvider *)itemProviderForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;
- (void)quickLookDocumentView:(_SFQuickLookDocumentView *)arg1 didSelectActionAtIndex:(long long)arg2;
@end

