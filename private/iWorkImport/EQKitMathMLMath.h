//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EQKitExpression.h"
#import "EQKitMathMLNode.h"
#import "EQKitRootNode.h"

@class EQKitEnvironmentInstance, EQKitMathMLNode, NSString;

__attribute__((visibility("hidden")))
@interface EQKitMathMLMath : NSObject <EQKitMathMLNode, EQKitRootNode, EQKitExpression>
{
    EQKitMathMLNode *mExpression;
    struct AttributeCollection *mAttributeCollection;
    EQKitEnvironmentInstance *mEnvironment;
}

@property(readonly, copy) NSString *description;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (_Bool)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (_Bool)isSpaceLike;
- (_Bool)isNumber;
- (long long)scriptLevelWithBase:(long long)arg1;
- (id)layoutStyleNode;
- (struct Schemata)layoutSchemata;
@property(readonly, nonatomic) id <EQKitLayoutNode> parent;
- (id)newLayout;
- (struct AttributeCollection *)attributeCollection;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

