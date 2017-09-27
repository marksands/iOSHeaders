//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import "IKJSDOMAttribute.h"

@class NSString;

@interface IKDOMAttribute : IKDOMNode <IKJSDOMAttribute>
{
}

- (_Bool)hasChildNodes;
- (id)childNodes;
- (id)lastChild;
- (id)firstChild;
- (id)previousSibling;
- (id)nextSibling;
- (_Bool)dispatchEvent:(id)arg1;
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;
- (id)getFeature:(id)arg1:(id)arg2;
- (id)removeChild:(id)arg1;
- (id)replaceChild:(id)arg1:(id)arg2;
- (id)insertBefore:(id)arg1:(id)arg2;
- (id)cloneNode:(_Bool)arg1;
- (id)appendChild:(id)arg1;
@property(readonly, nonatomic) IKDOMNode *ownerElement;
- (id)nodeValue;
- (id)nodeName;
- (id)textContent;
- (long long)nodeType;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSString *name;
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode *)arg2;

@end

