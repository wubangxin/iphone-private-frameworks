/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UITableViewCell.h>

@class UILabel, CKEntity;

@interface CKEntityView : UITableViewCell {
	UILabel* _label;
	CKEntity* _entity;
}
+(float)defaultHeight;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)setEntity:(id)entity;
-(void)sizeToFit;
@end

