//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

@class PDFAccessibilityNodePagePrivate;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityNodePage : PDFAccessibilityNode
{
    PDFAccessibilityNodePagePrivate *_private3;
}

- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)_pageView;
- (id)_document;
- (id)_documentView;
- (unsigned long long)_documentIndex;
- (id)accessibilityWindow;
- (id)accessibilityTopLevelUIElement;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (unsigned long long)pageNumber;
- (id)pageContentRootNode;
- (struct CGRect)bounds;
- (id)page;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParent:(id)arg1 pageNumber:(unsigned long long)arg2;

@end

