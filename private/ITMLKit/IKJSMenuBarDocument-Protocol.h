//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class IKDOMDocument, IKDOMElement, IKJSObject, NSDictionary;

@protocol IKJSMenuBarDocument <JSExport>
- (void)setSelectedItem:(IKJSObject *)arg1:(NSDictionary *)arg2;
- (IKDOMElement *)getSelectedItem;
- (void)setDocument:(IKDOMDocument *)arg1:(IKJSObject *)arg2:(NSDictionary *)arg3;
- (IKDOMDocument *)getDocument:(IKJSObject *)arg1;
@end

