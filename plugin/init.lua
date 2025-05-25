vim.api.nvim_create_autocmd('User', {
  pattern = 'TSUpdate',
  callback = function()
    require('nvim-treesitter.parsers').mail = {
      install_info = {
        path = vim.fs.joinpath(vim.fn.stdpath('data'), 'lazy/tree-sitter-mail'),
      },
      tier = 3,
    }
  end,
})
