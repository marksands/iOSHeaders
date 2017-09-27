//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString, WKWebProcessPlugInFrame;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;
@property(readonly) struct Object *_apiObject;
@property(readonly) struct InjectedBundleNodeHandle *_nodeHandle;
@property(readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
- (_Bool)isTextField;
@property(readonly, nonatomic) _Bool HTMLTextAreaElementIsUserEdited;
@property(readonly, nonatomic) _Bool HTMLInputElementIsUserEdited;
@property(nonatomic) _Bool HTMLInputElementIsAutoFilled;
@property(readonly, nonatomic) struct CGRect elementBounds;
- (id)renderedImageWithOptions:(unsigned int)arg1 width:(id)arg2;
- (id)renderedImageWithOptions:(unsigned int)arg1;
- (id)htmlIFrameElementContentFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

