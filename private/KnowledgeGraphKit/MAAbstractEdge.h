//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <KnowledgeGraphKit/MAEdge.h>

@class NSString;

@interface MAAbstractEdge : MAEdge
{
    NSString *_labelString;
}

- (void).cxx_destruct;
- (void)_setLabelString:(id)arg1;
- (unsigned short)_label;
- (id)_labelKey;
- (id)label;
- (_Bool)isAbstract;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabelString:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;
- (id)initWithLabelString:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3;
- (id)initWithLabel:(unsigned short)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5;

@end

