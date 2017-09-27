//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject
{
    _Bool _updated;
    _Bool _childrenUpdated;
    _Bool _subtreeUpdated;
    _Bool _autoHighlightRead;
    _Bool _bindingUpdated;
    _Bool _dataUpdated;
    IKDOMNode *_ownerJSNode;
    NSMutableDictionary *_featuresMap;
}

+ (id)jsNodeDataForNode:(struct _xmlNode *)arg1 create:(_Bool)arg2;
+ (void)load;
@property(retain, nonatomic) NSMutableDictionary *featuresMap; // @synthesize featuresMap=_featuresMap;
@property(nonatomic, getter=isDataUpdated) _Bool dataUpdated; // @synthesize dataUpdated=_dataUpdated;
@property(nonatomic, getter=isBindingUpdated) _Bool bindingUpdated; // @synthesize bindingUpdated=_bindingUpdated;
@property(nonatomic, getter=isAutoHighlightRead) _Bool autoHighlightRead; // @synthesize autoHighlightRead=_autoHighlightRead;
@property(nonatomic, getter=isSubtreeUpdated) _Bool subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property(nonatomic, getter=isChildrenUpdated) _Bool childrenUpdated; // @synthesize childrenUpdated=_childrenUpdated;
@property(nonatomic, getter=isUpdated) _Bool updated; // @synthesize updated=_updated;
@property(nonatomic) __weak IKDOMNode *ownerJSNode; // @synthesize ownerJSNode=_ownerJSNode;
- (void).cxx_destruct;
- (id)featureForName:(id)arg1;
- (void)setFeature:(id)arg1 forName:(id)arg2;

@end

