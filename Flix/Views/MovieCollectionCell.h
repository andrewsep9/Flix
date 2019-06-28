//
//  MovieCollectionCell.h
//  Flix
//
//  Created by andrews9 on 6/27/19.
//  Copyright © 2019 andrews9. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MovieCollectionCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *posterView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;



@end

NS_ASSUME_NONNULL_END
